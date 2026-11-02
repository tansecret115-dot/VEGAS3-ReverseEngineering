/* Module: rmme3260.dll
   Function: FUN_6623a6a0
   Address: 6623a6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623a6e3) */

void __fastcall FUN_6623a6a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_14 [2];
  int *local_c;
  int *local_8;
  
  iVar3 = FUN_66251030(&DAT_6627cee0,*(uint *)(param_1 + 0x111),(int *)&local_8);
  if (iVar3 != 0) {
    local_14[0] = local_8[1];
    local_c = local_8;
    while (local_14[0] != 0) {
      puVar4 = (undefined4 *)FUN_66250c10(local_14[0]);
      piVar1 = (int *)*puVar4;
      DAT_6627cf2c = DAT_6627cf2c + -1;
      if (DAT_6627cf2c == 0) {
        UnhookWindowsHookEx(DAT_6627cf30);
      }
      iVar3 = FUN_66251030(&DAT_6627cec0,(uint)piVar1,(int *)&local_8);
      piVar2 = local_8;
      if (iVar3 != 0) {
        uVar5 = (**(code **)(*local_8 + 0x18))(param_1,0);
        (**(code **)(*piVar2 + 0xc))(uVar5);
        if ((piVar2[4] == 0) && (FUN_66251160(&DAT_6627cec0,piVar1), piVar2 != (int *)0x0)) {
          (**(code **)*piVar2)(1);
        }
      }
      FUN_66250bf0(local_14);
    }
    FUN_66251160(&DAT_6627cee0,*(int **)(param_1 + 0x111));
    if (local_c != (int *)0x0) {
      (**(code **)*local_c)(1);
    }
  }
  return;
}


