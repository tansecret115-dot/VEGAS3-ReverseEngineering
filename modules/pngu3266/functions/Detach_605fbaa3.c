/* Module: pngu3266.dll
   Function: Detach
   Address: 605fbaa3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNDC::Detach(void) */

void __thiscall CPNDC::Detach(CPNDC *this)

{
                    /* 0xbaa3  949  ?Detach@CPNDC@@QAEXXZ */
  if (*(int *)(this + 0x1b3) == 0) {
    (**(code **)(*(int *)this + 0x84))();
  }
  *(undefined4 *)(this + 0x1cf) = 0;
  return;
}


