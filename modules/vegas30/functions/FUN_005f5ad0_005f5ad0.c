/* Module: vegas30.exe
   Function: FUN_005f5ad0
   Address: 005f5ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f5ad0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5
                )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_EBP;
  int *unaff_EDI;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 local_234;
  int *local_230 [5];
  undefined4 local_21c;
  undefined1 local_218 [260];
  undefined1 local_114 [8];
  undefined4 local_10c;
  undefined1 local_104 [256];
  undefined4 *puStack_4;
  
  *param_5 = 0;
  FUN_005b83b0(param_1,1);
  puVar5 = &local_21c;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_21c = 1;
  local_10c = 0xffffffff;
  iVar3 = FUN_005f55e0(param_2,0x104,local_218,local_114,1);
  if (iVar3 == 0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    FUN_005f0420(&local_21c,0x104,local_104);
    iVar3 = FUN_005bad20(param_1);
    if (iVar3 == 0) {
      iVar3 = -0x7fff0001;
    }
    else {
      local_234 = 0;
      iVar3 = FUN_005ec8a0(local_104,&local_234,0,0);
      if (((-1 < iVar3) && (iVar3 = FUN_005f5640(local_234,local_230), -1 < iVar3)) &&
         (local_230[0] != (int *)0x0)) {
        piVar6 = param_3;
        piVar7 = param_4;
        (**(code **)(*local_230[0] + 0x4c))(local_230[0]);
        iVar3 = (**(code **)*unaff_EBP)(unaff_EBP,&DAT_0060ef78,&stack0xfffffdc8);
        if (-1 < iVar3) {
          (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,&stack0xfffffdc0);
          (**(code **)(*piVar6 + 8))(piVar6);
          iVar4 = 0;
          iVar1 = *(int *)piVar6[0x4c];
          if (0 < iVar1) {
            do {
              iVar4 = iVar4 + 1;
              iVar2 = *(int *)(*(int *)(piVar6[0x4c] + 8) + -4 + iVar4 * 4);
              *(int **)(iVar2 + 0x20) = param_3;
              *(undefined4 *)(iVar2 + 0x78) = 0;
              *(int **)(iVar2 + 0x24) = param_4;
              *(undefined4 *)(iVar2 + 0x7c) = 0;
              *(undefined4 *)(iVar2 + 0x80) = 0;
              *(undefined4 *)(iVar2 + 0x84) = 0;
            } while (iVar4 < iVar1);
          }
          piVar6[0x4d] = piVar6[0x4d] | 0x80;
          piVar6[0x4d] = piVar6[0x4d] | 0x10;
          *puStack_4 = piVar6;
        }
        (**(code **)(*piVar7 + 8))(piVar7);
      }
    }
  }
  FUN_005b84d0(param_1,1);
  return iVar3;
}


