// vim: ts=4:sw=4:et:sta
#ifndef __Nidra_h
#define __Nidra_h

#include "CutFlow.h"
#include "Picker.h"
#include "Process.h"
#include "Splitter.h"
#include "Weight.h"

struct _object;
typedef _object PyObject;

namespace roast {
    template<typename T>
    long analyze(roast::Process&, const roast::CutFlow::Cuts&, const int, const int, PyObject*);
    template<typename T>
    void dump(roast::Process&, const std::vector<std::string>&, roast::Picker*);
    template<typename T>
    long fill(roast::Process&, std::vector<roast::Weight>&, PyObject*, std::vector<roast::Splitter*>, roast::Picker*);

    namespace ll {
        long analyze(roast::Process&, const roast::CutFlow::Cuts&, const int, const int, PyObject*);
        void dump(roast::Process&, const std::vector<std::string>&, roast::Picker*);
        long fill(roast::Process&, std::vector<roast::Weight>&, PyObject*, std::vector<roast::Splitter*>, roast::Picker* p=0);
    }

    namespace tl {
        long analyze(roast::Process&, const roast::CutFlow::Cuts&, const int, const int, PyObject*);
        void dump(roast::Process&, const std::vector<std::string>&, roast::Picker*);
        long fill(roast::Process&, std::vector<roast::Weight>&, PyObject*, std::vector<roast::Splitter*>, roast::Picker* p=0);
    }

    namespace tll {
        long analyze(roast::Process&, const roast::CutFlow::Cuts&, const int, const int, PyObject*);
        void dump(roast::Process&, const std::vector<std::string>&, roast::Picker*);
        long fill(roast::Process&, std::vector<roast::Weight>&, PyObject*, std::vector<roast::Splitter*>, roast::Picker* p=0);
    }

    namespace ttl {
        long analyze(roast::Process&, const roast::CutFlow::Cuts&, const int, const int, PyObject*);
        void dump(roast::Process&, const std::vector<std::string>&, roast::Picker*);
        long fill(roast::Process&, std::vector<roast::Weight>&, PyObject*, std::vector<roast::Splitter*>, roast::Picker* p=0);
    }
}

#endif
