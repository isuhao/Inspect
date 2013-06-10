#pragma once

#include "Inspect/DataBinding.h"
#include "Inspect/Interpreter.h"
#include "Inspect/Controls/LabelControl.h"
#include "Inspect/Canvas.h"

namespace Helium
{
    namespace Inspect
    {
        class HELIUM_INSPECT_API Script
        {
        public:
            static void Initialize();
            static void Cleanup();

        private:
            static bool PreProcess(std::string& script);
            static void ParseAttributes(std::string& attributes, Control* control);

        public:
            // parses script data and binds controls to data
            static bool Parse(const std::string& script, Interpreter* interpreter, Canvas* canvas, Container* output, uint32_t fieldFlags = 0);
        };
    }
}