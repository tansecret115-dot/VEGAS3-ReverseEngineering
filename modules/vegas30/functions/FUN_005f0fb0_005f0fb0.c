/* Module: vegas30.exe
   Function: FUN_005f0fb0
   Address: 005f0fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005f0fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_EBX;
  int iVar3;
  int iVar4;
  int local_110;
  undefined4 uStack_10c;
  int local_108;
  CHAR local_104 [260];
  
  iVar4 = 0;
  if (*(int **)(param_1 + 0x130) == (int *)0x0) {
    local_110 = 0;
  }
  else {
    local_110 = **(int **)(param_1 + 0x130);
  }
  iVar3 = 0;
  local_108 = param_1;
  if (0 < local_110) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 8) + iVar3 * 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 2)) && (*(int *)(iVar1 + 0x5c) == 0)) {
        piVar2 = *(int **)(iVar1 + 0x60);
        if ((piVar2 != (int *)0x0) &&
           (iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,local_104,0x104), -1 < iVar4)) {
          uStack_10c = 0;
          iVar4 = (**(code **)(**(int **)(iVar1 + 0x60) + 0x24))
                            (*(int **)(iVar1 + 0x60),&uStack_10c);
          if (iVar4 < 0) {
            return iVar4;
          }
          if (unaff_EBX != (undefined4 *)0x0) {
            (**(code **)*unaff_EBX)(1);
            unaff_EBX = (undefined4 *)0x0;
          }
          (**(code **)(**(int **)(iVar1 + 0x60) + 8))(*(int **)(iVar1 + 0x60));
          *(undefined4 *)(iVar1 + 0x60) = 0;
          DeleteFileA(local_104);
        }
        *(undefined4 *)(iVar1 + 0x58) = 0;
        param_1 = local_108;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_110);
  }
  return iVar4;
}


