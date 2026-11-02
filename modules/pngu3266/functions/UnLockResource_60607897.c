/* Module: pngu3266.dll
   Function: UnLockResource
   Address: 60607897
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNGraphicResource::UnLockResource(void) */

int __thiscall CPNGraphicResource::UnLockResource(CPNGraphicResource *this)

{
                    /* 0x17897  2102  ?UnLockResource@CPNGraphicResource@@QAEHXZ */
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  if (*(int *)(this + 8) < 1) {
    (**(code **)(*(int *)this + 0xc))();
  }
  return 1;
}


