/* Module: vegas30.exe
   Function: FUN_00455420
   Address: 00455420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455420(int param_1,HDC param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  tagRECT local_10;
  
  piVar3 = (int *)(param_1 + 0x54);
  local_14 = 0xf;
  do {
    piVar1 = (int *)*piVar3;
    if (0 < piVar1[7]) {
      iVar2 = IntersectClipRect(param_2,piVar1[2],piVar1[3],piVar1[4],piVar1[5]);
      if (iVar2 != 1) {
        GetClipBox(param_2,&local_10);
        (**(code **)(*piVar1 + 0x10))(param_1,piVar1,param_2,&local_10);
      }
      SelectClipRgn(param_2,(HRGN)0x0);
    }
    piVar3 = piVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}


