#pragma once

#include "displayapp/apps/Apps.h"
#include "displayapp/screens/Screen.h"
#include "displayapp/Controllers.h"
#include "Symbols.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class BlitzApp : public Screen {
      public:
        BlitzApp();
        ~BlitzApp() override;
      };
    }
    
    template <>
    struct AppTraits<Apps::BlitzApp> {
      static constexpr Apps app = Apps::BlitzApp;
      static constexpr const char* icon = Screens::Symbols::bolt;

      static Screens::Screen* Create(AppControllers& controllers) {
        return new Screens::BlitzApp();
      }
    };
  }
}