/* Module: vegas30.exe
   Function: FUN_005402d0
   Address: 005402d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005402d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = 0;
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  FUN_005b83b0(param_1,1);
  iVar1 = FUN_005403e0(param_1,&local_4,param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_005409c0(param_1,local_4,1);
    if (iVar1 < 0) {
      FUN_005403b0(local_4,1);
    }
    else {
      iVar1 = -0x7ff8fff2;
      iVar2 = FUN_005ec620();
      if (iVar2 != 0) {
        iVar1 = FUN_005ec8a0(local_4 + 0x3c,local_4 + 0x30,0,0);
        if (iVar1 < 0) {
          uVar3 = FUN_005b89a0(param_1);
          FUN_005400b0(uVar3,local_4,1);
        }
        else {
          FUN_005ed3f0(*(undefined4 *)(local_4 + 0x30));
        }
      }
    }
  }
  FUN_005b86a0(param_1,1);
  FUN_005b84d0(param_1,1);
  DAT_0064767c = DAT_0064767c | 0x10;
  return iVar1;
}


