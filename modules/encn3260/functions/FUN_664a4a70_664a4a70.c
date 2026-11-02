/* Module: encn3260.dll
   Function: FUN_664a4a70
   Address: 664a4a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a4ab3) */

void __fastcall FUN_664a4a70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_14 [2];
  int *local_c;
  int *local_8;
  
  iVar3 = FUN_664c3eb0(&DAT_664f06d8,*(uint *)(param_1 + 0x111),(int *)&local_8);
  if (iVar3 != 0) {
    local_14[0] = local_8[1];
    local_c = local_8;
    while (local_14[0] != 0) {
      puVar4 = (undefined4 *)FUN_664bab80(local_14[0]);
      piVar1 = (int *)*puVar4;
      DAT_664f0724 = DAT_664f0724 + -1;
      if (DAT_664f0724 == 0) {
        UnhookWindowsHookEx(DAT_664f0728);
      }
      iVar3 = FUN_664c3eb0(&DAT_664f06b8,(uint)piVar1,(int *)&local_8);
      piVar2 = local_8;
      if (iVar3 != 0) {
        uVar5 = (**(code **)(*local_8 + 0x18))(param_1,0);
        (**(code **)(*piVar2 + 0xc))(uVar5);
        if ((piVar2[4] == 0) && (FUN_664c3fe0(&DAT_664f06b8,piVar1), piVar2 != (int *)0x0)) {
          (**(code **)*piVar2)(1);
        }
      }
      FUN_664bab40(local_14);
    }
    FUN_664c3fe0(&DAT_664f06d8,*(int **)(param_1 + 0x111));
    if (local_c != (int *)0x0) {
      (**(code **)*local_c)(1);
    }
  }
  return;
}


