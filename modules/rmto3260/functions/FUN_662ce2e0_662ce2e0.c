/* Module: rmto3260.dll
   Function: FUN_662ce2e0
   Address: 662ce2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ce2e0(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint local_14 [3];
  uint local_8;
  
  bVar2 = false;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  iVar3 = FUN_662d01e0(param_1);
  if (-1 < iVar3) {
    iVar1 = *(int *)((int)param_1 + 0x34);
    local_8 = 0;
    if (iVar1 != 2) {
      do {
        if ((iVar3 != 0) || (bVar2)) break;
        iVar3 = FUN_662cff20(param_1,local_14);
        if (-1 < iVar3) {
          if (local_14[0] < 0x44415442) {
            if (local_14[0] == 0x44415441) {
LAB_662ce38c:
              bVar2 = true;
            }
            else if (local_14[0] == 0x434f4e54) {
              iVar3 = FUN_662d0100(param_1,(int)local_14);
            }
            else {
LAB_662ce365:
              iVar3 = FUN_662d0170(param_1,(int)local_14);
            }
          }
          else {
            if (local_14[0] == 0x494e4458) goto LAB_662ce38c;
            if (local_14[0] == 0x4d445052) {
              iVar3 = FUN_662d00a0(param_1,(int)local_14);
            }
            else {
              if (local_14[0] != 0x50524f50) goto LAB_662ce365;
              iVar3 = FUN_662d0020(param_1,(int)local_14);
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar1 - 2U);
    }
  }
  if ((-1 < iVar3) && (iVar3 = FUN_662ce3c0(param_1), -1 < iVar3)) {
    FUN_662ce460(param_1);
  }
  return;
}


