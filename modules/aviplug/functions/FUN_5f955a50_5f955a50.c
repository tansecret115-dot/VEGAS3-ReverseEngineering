/* Module: aviplug.dll
   Function: FUN_5f955a50
   Address: 5f955a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f955a50(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  if ((((param_2 == (uint *)0x0) || (param_3 < 0x18)) || (uVar3 = param_2[1], uVar3 == 0)) ||
     (uVar1 = param_2[3], uVar1 == 0)) {
    return 0xfffffffa;
  }
  if ((*param_2 & 0x80000000) != 0) {
    return 0;
  }
  if (((((param_1[0xb] == (uint)*(ushort *)(uVar3 + 0xe)) && (param_1[8] == *(int *)(uVar3 + 4))) &&
       ((param_1[9] == *(int *)(uVar3 + 8) &&
        ((param_1[10] == *(int *)(uVar3 + 0x10) && (param_1[0xc] == *(int *)(uVar3 + 0x14))))))) &&
      (param_1[0x10] == (uint)*(ushort *)(uVar1 + 0xe))) &&
     (((param_1[0xd] == *(int *)(uVar1 + 4) && (param_1[0xe] == *(int *)(uVar1 + 8))) &&
      (param_1[0xf] == *(int *)(uVar1 + 0x10))))) {
    (*(code *)param_1[7])(param_1[6],param_2[2],param_2[4],param_1[0x11]);
    return 0;
  }
  pcVar2 = (code *)(**(code **)(*param_1 + 0x40))(param_1,uVar3,uVar1,0);
  if (pcVar2 == (code *)0x0) {
    return 0xfffffffe;
  }
  uVar3 = (uint)*(ushort *)(param_2[3] + 0xe) * *(int *)(param_2[3] + 4) + 0x1f;
  (*pcVar2)(param_1[6],param_2[2],param_2[4],
            -((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3));
  return 0;
}


