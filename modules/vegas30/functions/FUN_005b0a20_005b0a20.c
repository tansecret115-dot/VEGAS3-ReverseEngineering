/* Module: vegas30.exe
   Function: FUN_005b0a20
   Address: 005b0a20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005b0a20(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  int *local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  iVar2 = FUN_005b0b50(param_1,param_2,param_5,param_6,&local_10,&param_6);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_005a5bd0(param_2 + 0x2b8,0,param_2 + 0x9c0);
    puVar4 = puVar3;
    for (iVar2 = 0x118; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar3 + 0x10b;
    puVar3[0x114] = &LAB_005ac450;
    *puVar3 = 0;
    *puVar4 = 0;
    iVar2 = (**(code **)(*param_6 + 0x3c))
                      (param_6,local_10,local_c,puVar4,puVar3 + 0x10c,puVar3,0,local_8,
                       (byte)(*(uint *)(param_2 + 0xb0) >> 2) & 8 | 2,param_4);
    if (iVar2 == 0) {
      if (puVar3[0x10c] != 0) {
        uVar1 = puVar3[0x10d];
        puVar3[0x115] = *puVar4;
        puVar3[0x116] = local_10;
        puVar3[0x10d] = uVar1 | 1;
        puVar3[0x10e] = puVar3[0x10e] + 1;
        puVar3[0x10d] = (uint)(param_4 != 0) << 2 | uVar1 & 0xfffffffb | 1;
        *unaff_ESI = puVar3;
        return puVar3 != (undefined4 *)0x0;
      }
      (**(code **)(*local_10 + 0x40))(local_10,*puVar4);
    }
  }
  return false;
}


