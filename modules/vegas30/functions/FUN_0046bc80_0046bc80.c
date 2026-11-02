/* Module: vegas30.exe
   Function: FUN_0046bc80
   Address: 0046bc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046bc80(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_24 = (int *)0x0;
  }
  else {
    local_24 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar4 = *local_24;
  if (0 < iVar4) {
    FUN_0046b9e0(param_1);
    iVar2 = *param_2;
    if (0 < iVar2) {
      local_10 = 0;
      local_20 = 0;
      local_c = iVar2;
      FUN_004694a0(param_2,0,&local_10,0,&local_20,0,0);
      if (0 < local_20) {
        iVar3 = -1;
        local_18 = *(undefined4 *)(param_1 + 0xbc8);
        local_14 = 0;
        if (0 < iVar2) {
          do {
            piVar1 = *(int **)(param_2[2] + local_14 * 4);
            if (((*piVar1 == 0x31) || (*piVar1 == 0x32)) && (iVar2 = piVar1[4], iVar2 != iVar3)) {
              (**(code **)(*param_4 + 8))(iVar2,piVar1[1],iVar4,piVar1[8],piVar1[9],0,&local_8);
              iVar3 = iVar2;
              if (local_8 == 0) {
                if (iVar4 <= iStack_4) {
                  return;
                }
                iVar2 = FUN_005ce780(&iStack_1c,local_18,piVar1[1],iStack_4,0);
                if (-1 < iVar2) {
                  FUN_004ea250(local_18,iStack_1c,0xb,0);
                  iVar4 = iVar4 + 1;
                }
              }
              else if (local_8 == 1) {
                iStack_1c = *(int *)(local_24[2] + iStack_4 * 4);
                *(uint *)(iStack_1c + 0x10) = *(uint *)(iStack_1c + 0x10) | 0x100000;
              }
            }
            local_14 = local_14 + 1;
          } while (local_14 < local_c);
        }
        if (DAT_00649e0c == 0) {
          FUN_0046bc20(param_1,param_5,param_6);
        }
      }
    }
  }
  return;
}


