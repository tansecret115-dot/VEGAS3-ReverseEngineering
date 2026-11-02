/* Module: vegas30.exe
   Function: FUN_005e3f90
   Address: 005e3f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e3f90(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    puVar4 = local_70;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_70[0] = 0x1000000;
    local_70[1] = 0x30;
    uVar1 = FUN_005ba4b0(param_1,0);
    uVar2 = FUN_005b9fc0(param_1,uVar1,0);
    FUN_005ba780(param_1,uVar1,local_58,local_50,local_54);
    FUN_005ba670(param_1,uVar1,0,local_40,0,0);
    local_60 = local_28;
    local_5c = local_24;
    local_70[2] = local_34;
    local_48 = FUN_005ba5c0(param_1,uVar1,1);
    local_44 = 0;
    FUN_005ba030(param_1,uVar2,0,1);
    uVar1 = (**(code **)(*param_2 + 0x28))(param_2,local_70,local_70[1]);
    return uVar1;
  }
  return 0x80004003;
}


