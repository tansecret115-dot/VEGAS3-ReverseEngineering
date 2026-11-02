/* Module: InstMsi-x86w.exe
   Function: FUN_01006b10
   Address: 01006b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006b10(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  iVar3 = param_1[0x2a];
  iVar2 = (*(code *)param_1[4])(param_1[0x21],param_1[0x12],iVar3);
  if (iVar2 == iVar3) {
    uVar5 = (uint)*(ushort *)(param_1[0x12] + 4);
    if (uVar5 + param_2 <= (uint)param_1[0x26]) {
      uVar7 = (*(code *)param_1[4])(param_1[0x21],param_1[0xf] + param_2,uVar5);
      if ((uint)uVar7 == uVar5) {
        if (*(int *)param_1[0x12] != 0) {
          puVar6 = (uint *)((int *)param_1[0x12] + 1);
          uVar7 = FUN_0100749c(extraout_ECX,(int)((ulonglong)uVar7 >> 0x20),
                               (uint *)(param_1[0xf] + param_2),(uint)(ushort)*puVar6,0);
          uVar7 = FUN_0100749c(extraout_ECX_00,(int)((ulonglong)uVar7 >> 0x20),puVar6,
                               param_1[0x2a] - 4,(uint)uVar7);
          if (*(int *)param_1[0x12] != (int)uVar7) {
            FUN_01007480((undefined4 *)*param_1,4,0);
            return 0;
          }
        }
        *(short *)(param_1[0x12] + 4) = *(short *)(param_1[0x12] + 4) + (short)param_2;
        if ((param_2 != 0) || (uVar4 = 0, *(short *)(param_1[0x12] + 6) == 0)) {
          uVar4 = 1;
        }
        if (param_1[10] != 0) {
          param_1[0x1f9] = 2;
          param_1[0x1fa] = param_1[0xe];
          sVar1 = (short)param_1[0x2a] + -8;
          *(short *)(param_1 + 0x1fc) = sVar1;
          if (sVar1 == 0) {
            param_1[0x1fb] = 0;
          }
          else {
            param_1[0x1fb] = param_1[0x12] + 8;
          }
          param_1[0x1fd] = param_1[0xf] + param_2;
          *(undefined2 *)(param_1 + 0x1fe) = *(undefined2 *)(param_1[0x12] + 4);
          param_1[0x1ff] = uVar4;
          *(short *)(param_1 + 0x200) = (short)param_2;
          iVar3 = (*(code *)param_1[10])(param_1 + 0x1f9);
          if (iVar3 == -1) {
            FUN_01007480((undefined4 *)*param_1,0xb,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  FUN_01007480((undefined4 *)*param_1,4,0);
  return 0;
}


