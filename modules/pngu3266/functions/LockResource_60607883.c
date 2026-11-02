/* Module: pngu3266.dll
   Function: LockResource
   Address: 60607883
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNGraphicResource::LockResource(void) */

int __thiscall CPNGraphicResource::LockResource(CPNGraphicResource *this)

{
                    /* 0x17883  1549  ?LockResource@CPNGraphicResource@@QAEHXZ */
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  if (*(int *)(this + 8) == 1) {
    (**(code **)(*(int *)this + 8))();
  }
  return 1;
}


