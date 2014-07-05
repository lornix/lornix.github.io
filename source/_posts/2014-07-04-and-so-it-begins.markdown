---
layout: post
title: "And So It Begins"
date: 2014-07-04 20:47:23 -0700
comments: false
categories:
---
I'm going to try to document some of my findings and explorations, much of
which I probably have in a git repo somewhere.

Also have to figure out the markdown syntax for here.

__Basically__, I _should_ be able to `use` [GitHub][1] Flavored Markdown here now.

    Some code lines here
    let x=y*25;
    writeln("Argh! Pascal!");
    exit(0);

And then back to regular stuff.

    #define _GNU_SOURCE
    #include <dlfcn.h>
    #include <stdio.h>

    void* malloc(size_t sz)
    {
        void *(*libc_malloc)(size_t) = dlsym(RTLD_NEXT, "malloc");
        printf("malloc\n");
        return libc_malloc(sz);
    }

    void free(void *p)
    {
        void (*libc_free)(void*) = dlsym(RTLD_NEXT, "free");
        printf("free\n");
        libc_free(p);
    }

    int main()
    {
        free(malloc(10));
        return 0;
    }



    #include <vector>
    #include <string>
    #include <sstream>

    std::vector<std::string> Lornix::split(std::string s, char delim) {
        std::vector<std::string> elems;
        std::stringstream ss(s);
        std::string item;
        while (std::getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }

    std::string Lornix::join(std::vector<std::string> v, std::string delim) {
        std::stringstream ss = v[0];
        for (size_t i = 1; i < v.size(); ++i) {
            ss << delim << v[i];
        }
        return ss.str();
    }

[1]: http://github.com/lornix/lornix.github.io
