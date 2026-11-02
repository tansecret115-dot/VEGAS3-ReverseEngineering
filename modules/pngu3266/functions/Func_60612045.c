/* Module: pngu3266.dll
   Function: Func
   Address: 60612045
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNTimer::Func(void) */

long XPNTimer::Func(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_stack_00000004;
  
                    /* 0x22045  1064  ?Func@XPNTimer@@UAGJXZ */
  iVar2 = in_stack_00000004[7];
  in_stack_00000004[8] = 1;
  if (in_stack_00000004[6] != 0) {
    (**(code **)(*in_stack_00000004 + 0x10))();
  }
  if ((in_stack_00000004[3] == 0) || (in_stack_00000004[6] == 0)) {
    if (iVar2 == in_stack_00000004[7]) {
      in_stack_00000004[6] = 0;
      in_stack_00000004[7] = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)m_scheduler + 0xc))(m_scheduler);
    in_stack_00000004[7] = iVar2;
  }
  if (((in_stack_00000004[6] == 0) &&
      (puVar1 = (undefined4 *)in_stack_00000004[9], puVar1 != (undefined4 *)0x0)) &&
     ((int *)*puVar1 == in_stack_00000004)) {
    *puVar1 = 0;
  }
  in_stack_00000004[8] = 0;
  return 0;
}


