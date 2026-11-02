/* Module: wmfdist2.exe
   Function: FUN_01006b59
   Address: 01006b59
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006b59(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  iVar2 = (*(code *)param_1[4])(param_1[0x21],param_1[0x12],param_1[0x2a]);
  if ((param_1[0x2a] == iVar2) &&
     ((uint)*(ushort *)(param_1[0x12] + 4) + param_2 <= (uint)param_1[0x26])) {
    puVar5 = (uint *)param_1[0x12];
    uVar3 = (uint)(ushort)puVar5[1];
    uVar4 = (*(code *)param_1[4])(param_1[0x21],param_2 + param_1[0xf],uVar3);
    if (uVar3 == uVar4) {
      if (*puVar5 != 0) {
        uVar3 = FUN_010071a7((uint *)(param_2 + param_1[0xf]),uVar3,0);
        uVar3 = FUN_010071a7((uint *)(param_1[0x12] + 4),param_1[0x2a] - 4,uVar3);
        puVar5 = (uint *)param_1[0x12];
        if (uVar3 != *puVar5) goto LAB_01006c75;
      }
      *(short *)(puVar5 + 1) = (short)puVar5[1] + (short)param_2;
      if ((param_2 == 0) && (*(short *)(param_1[0x12] + 6) != 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      if (param_1[10] == 0) {
        return 1;
      }
      param_1[0x1f9] = 2;
      param_1[0x1fa] = param_1[0xe];
      *(short *)(param_1 + 0x1fc) = *(short *)(param_1 + 0x2a) + -8;
      if ((short)(*(short *)(param_1 + 0x2a) + -8) == 0) {
        param_1[0x1fb] = 0;
      }
      else {
        param_1[0x1fb] = param_1[0x12] + 8;
      }
      param_1[0x1fd] = param_2 + param_1[0xf];
      uVar1 = *(undefined2 *)(param_1[0x12] + 4);
      param_1[0x1ff] = uVar6;
      *(undefined2 *)(param_1 + 0x1fe) = uVar1;
      *(short *)(param_1 + 0x200) = (short)param_2;
      iVar2 = (*(code *)param_1[10])(param_1 + 0x1f9);
      if (iVar2 != -1) {
        return 1;
      }
      uVar6 = 0xb;
      goto LAB_01006c79;
    }
  }
LAB_01006c75:
  uVar6 = 4;
LAB_01006c79:
  FUN_0100718c((undefined4 *)*param_1,uVar6,0);
  return 0;
}


