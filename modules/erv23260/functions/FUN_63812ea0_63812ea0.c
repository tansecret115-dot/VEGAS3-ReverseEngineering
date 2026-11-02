/* Module: erv23260.dll
   Function: FUN_63812ea0
   Address: 63812ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63812ea0(void *this,uint *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  char local_c;
  char cStack_b;
  char local_8;
  char cStack_7;
  
  uVar4 = param_3;
  puVar3 = param_1;
  bVar2 = param_2[2];
  cVar10 = -(bVar2 & 1);
  if ((bVar2 & 4) == 0) {
    local_10 = (ushort)param_1[-2] & (short)cVar10;
    if (*(int *)(param_3 + 4) != 4) goto LAB_63813148;
    uVar9 = *param_1;
    puVar1 = param_1 + 2;
    param_1._0_1_ = (char)(*(uint *)(param_2 + -8) & (int)cVar10);
    param_3._0_1_ = (char)uVar9;
    local_8 = (char)*puVar1;
    iVar5 = (int)(char)param_1 - (int)(char)param_3;
    iVar11 = (int)(char)param_3 - (int)local_8;
    iVar7 = (int)local_8 - (int)(char)param_1;
    param_1._1_1_ = (char)((*(uint *)(param_2 + -8) & (int)cVar10) >> 8);
    param_3._1_1_ = (char)(uVar9 >> 8);
    cStack_7 = (char)(*puVar1 >> 8);
    iVar6 = (int)param_1._1_1_ - (int)param_3._1_1_;
    iVar12 = (int)param_3._1_1_ - (int)cStack_7;
    iVar8 = (int)cStack_7 - (int)param_1._1_1_;
    local_14 = CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + param_3._1_1_ ^
                        ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                        ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                        (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                        ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + (char)param_3 ^
                        ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
    param_1._0_1_ = (char)*(undefined4 *)param_2;
    iVar5 = (int)(char)param_1 - (int)(char)param_3;
    iVar11 = (int)(char)param_3 - (int)local_8;
    iVar7 = (int)local_8 - (int)(char)param_1;
    param_1._1_1_ = (char)((uint)*(undefined4 *)param_2 >> 8);
    iVar6 = (int)param_1._1_1_ - (int)param_3._1_1_;
    iVar12 = (int)param_3._1_1_ - (int)cStack_7;
    iVar8 = (int)cStack_7 - (int)param_1._1_1_;
    local_18._0_2_ =
         CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + param_3._1_1_ ^
                  ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                  ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                  (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                  ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + (char)param_3 ^
                  ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
    local_18 = (char *)(uint)(ushort)local_18;
    param_3 = uVar9;
  }
  else {
    local_14 = (short)cVar10;
    local_18 = param_2 + *(int *)((int)this + 0x118) * -0x10;
    uVar13 = param_1[-2] & (int)cVar10;
    uVar9 = *(uint *)(local_18 + 0x10) & (int)(char)-((char)bVar2 >> 1 & 1U);
    param_1._0_1_ = (char)uVar13;
    local_c = (char)*(undefined4 *)local_18;
    local_8 = (char)uVar9;
    iVar5 = (int)(char)param_1 - (int)local_c;
    iVar11 = (int)local_c - (int)local_8;
    iVar7 = (int)local_8 - (int)(char)param_1;
    param_1._1_1_ = (char)(uVar13 >> 8);
    cStack_b = (char)((uint)*(undefined4 *)local_18 >> 8);
    cStack_7 = (char)(uVar9 >> 8);
    iVar6 = (int)param_1._1_1_ - (int)cStack_b;
    iVar12 = (int)cStack_b - (int)cStack_7;
    iVar8 = (int)cStack_7 - (int)param_1._1_1_;
    local_10 = CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + cStack_b ^
                        ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                        ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                        (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                        ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + local_c ^
                        ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
    if (*(int *)(param_3 + 4) == 4) {
      param_1._0_1_ = (char)*puVar3;
      local_c = (char)*(undefined4 *)(local_18 + 8);
      iVar5 = (int)(char)param_1 - (int)local_c;
      iVar11 = (int)local_c - (int)local_8;
      iVar7 = (int)local_8 - (int)(char)param_1;
      param_1._1_1_ = (char)(*puVar3 >> 8);
      cStack_b = (char)((uint)*(undefined4 *)(local_18 + 8) >> 8);
      iVar6 = (int)param_1._1_1_ - (int)cStack_b;
      iVar12 = (int)cStack_b - (int)cStack_7;
      iVar8 = (int)cStack_7 - (int)param_1._1_1_;
      param_3 = (uint)CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + cStack_b ^
                               ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                               ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                               (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                               ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + local_c ^
                               ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
      uVar9 = *(uint *)(param_2 + -8) & (int)cVar10;
      param_1._0_1_ = (char)uVar9;
      local_c = (char)*puVar3;
      local_8 = (char)puVar3[2];
      iVar5 = (int)(char)param_1 - (int)local_c;
      iVar11 = (int)local_c - (int)local_8;
      iVar7 = (int)local_8 - (int)(char)param_1;
      param_1._1_1_ = (char)(uVar9 >> 8);
      cStack_b = (char)(*puVar3 >> 8);
      cStack_7 = (char)(puVar3[2] >> 8);
      iVar6 = (int)param_1._1_1_ - (int)cStack_b;
      iVar12 = (int)cStack_b - (int)cStack_7;
      iVar8 = (int)cStack_7 - (int)param_1._1_1_;
      local_14 = CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + cStack_b ^
                          ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                          ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                          (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                          ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + local_c ^
                          ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
      param_1._0_1_ = (char)*(undefined4 *)param_2;
      iVar5 = (int)(char)param_1 - (int)local_c;
      iVar11 = (int)local_c - (int)local_8;
      iVar7 = (int)local_8 - (int)(char)param_1;
      param_1._1_1_ = (char)((uint)*(undefined4 *)param_2 >> 8);
      iVar6 = (int)param_1._1_1_ - (int)cStack_b;
      iVar12 = (int)cStack_b - (int)cStack_7;
      iVar8 = (int)cStack_7 - (int)param_1._1_1_;
      local_18._0_2_ =
           CONCAT11(((byte)iVar6 & (byte)((uint)iVar6 >> 8)) + cStack_b ^
                    ((byte)iVar12 & (byte)((uint)iVar12 >> 8)) + cStack_7 ^
                    ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + param_1._1_1_,
                    (char)param_1 + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                    ((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + local_c ^
                    ((byte)iVar11 & (byte)((uint)iVar11 >> 8)) + local_8);
      local_18 = (char *)(uint)(ushort)local_18;
    }
  }
LAB_63813148:
  *(int *)(uVar4 + 0x10) = (int)(char)*puVar3 - (int)(char)local_10;
  *(int *)(uVar4 + 0x14) = (int)*(char *)((int)puVar3 + 1) - (int)(char)(local_10 >> 8);
  if (*(int *)(uVar4 + 4) == 4) {
    *(int *)(uVar4 + 0x18) = (int)(char)puVar3[2] - (int)(char)param_3;
    *(int *)(uVar4 + 0x1c) = (int)*(char *)((int)puVar3 + 9) - (int)(char)(param_3 >> 8);
    *(int *)(uVar4 + 0x20) = (int)*param_2 - (int)(char)local_14;
    *(int *)(uVar4 + 0x24) = (int)param_2[1] - (int)(char)((ushort)local_14 >> 8);
    *(int *)(uVar4 + 0x28) = (int)param_2[8] - (int)(char)(ushort)local_18;
    *(int *)(uVar4 + 0x2c) = (int)param_2[9] - (int)(char)((ushort)local_18 >> 8);
  }
  return;
}


