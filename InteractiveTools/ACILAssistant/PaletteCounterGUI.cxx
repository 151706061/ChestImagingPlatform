// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "PaletteCounterGUI.h"
#include "cipChestConventions.h"

PaletteCounterGUI::PaletteCounterGUI() {
  this->m_ChestRegion = " ";
  this->m_ChestType = " ";
  this->m_ChestRegionBuffer = new Fl_Text_Buffer();
  this->m_ChestTypeBuffer = new Fl_Text_Buffer();
  this->m_CountBuffer = new Fl_Text_Buffer();
  { paletteCounterWindow = new Fl_Double_Window(542, 112, "Palette Counter");
    paletteCounterWindow->box(FL_UP_BOX);
    paletteCounterWindow->user_data((void*)(this));
    { chestRegionField = new Fl_Text_Display(163, 11, 367, 25, "Selected Chest Region");
      chestRegionField->align(Fl_Align(260));
    } // Fl_Text_Display* chestRegionField
    { chestTypeField = new Fl_Text_Display(164, 44, 366, 26, "Selected Chest Type");
      chestTypeField->align(Fl_Align(260));
    } // Fl_Text_Display* chestTypeField
    { countField = new Fl_Text_Display(164, 75, 366, 25, "Number Selected Points");
      countField->align(Fl_Align(260));
    } // Fl_Text_Display* countField
    paletteCounterWindow->end();
  } // Fl_Double_Window* paletteCounterWindow
}

void PaletteCounterGUI::SetChestRegion(std::string cipRegion) {
  this->m_ChestRegionBuffer->text(cipRegion.c_str());
  this->chestRegionField->buffer(this->m_ChestRegionBuffer);
}

void PaletteCounterGUI::SetChestType(std::string cipType) {
  this->m_ChestTypeBuffer->text(cipType.c_str());
  this->chestTypeField->buffer(this->m_ChestTypeBuffer);
}

void PaletteCounterGUI::SetCount(unsigned int count) {
  std::stringstream stream;
  stream << count;
  
  this->m_CountBuffer->text( stream.str().c_str() );
  this->countField->buffer(this->m_CountBuffer);
}
