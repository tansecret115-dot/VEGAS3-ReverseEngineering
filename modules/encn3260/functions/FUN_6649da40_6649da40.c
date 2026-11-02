/* Module: encn3260.dll
   Function: FUN_6649da40
   Address: 6649da40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6649da40(UINT_PTR param_1,int *param_2)

{
  UINT_PTR *pUVar1;
  UINT_PTR uIDEvent;
  UINT_PTR uIDEvent_00;
  
  pUVar1 = (UINT_PTR *)*param_2;
  if ((((pUVar1[3] & 4) != 0) && (uIDEvent = pUVar1[1], uIDEvent != 0)) &&
     (uIDEvent_00 = *pUVar1, uIDEvent_00 != 0)) {
    if (uIDEvent_00 == param_1) {
      KillTimer((HWND)0x0,uIDEvent);
      FUN_664bbe60(&DAT_664f0618,*(uint *)(*param_2 + 4));
      *(undefined4 *)(*param_2 + 4) = 0;
      return;
    }
    if (uIDEvent == param_1) {
      KillTimer((HWND)0x0,uIDEvent_00);
      FUN_664bbe60(&DAT_664f0618,*(uint *)*param_2);
      *(undefined4 *)*param_2 = 0;
    }
  }
  return;
}


