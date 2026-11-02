/* Module: pngu3266.dll
   Function: Attach
   Address: 605f57bd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNFont::Attach(void * const &) */

void __thiscall CPNFont::Attach(CPNFont *this,void **param_1)

{
  void *pvVar1;
  
                    /* 0x57bd  809  ?Attach@CPNFont@@UAEXABQAX@Z */
  if ((*(HGDIOBJ *)(this + 0x2c) != (HGDIOBJ)0x0) && (*(int *)(this + 0x30) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x2c));
  }
  pvVar1 = *param_1;
  *(undefined4 *)(this + 0x30) = 1;
  *(void **)(this + 0x2c) = pvVar1;
  return;
}


