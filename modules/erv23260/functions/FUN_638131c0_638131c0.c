/* Module: erv23260.dll
   Function: FUN_638131c0
   Address: 638131c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638131c0(void *this,undefined4 param_1,char *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 local_10;
  undefined2 local_c;
  undefined2 local_8;
  
  pcVar3 = param_2;
  bVar1 = param_2[2];
  if ((bVar1 & 4) == 0) {
    if (param_2[-0xd] == param_2[3]) {
      local_10 = (ushort)*(undefined4 *)(param_2 + -0x10) & (short)(char)-(bVar1 & 1);
    }
    else {
      local_10 = 0;
    }
  }
  else {
    cVar2 = param_2[3];
    pcVar6 = param_2 + *(int *)((int)this + 0x118) * -0x10;
    if (param_2[-0xd] == cVar2) {
      local_c = (ushort)*(undefined4 *)(param_2 + -0x10) & (short)(char)-(bVar1 & 1);
    }
    else {
      local_c = 0;
    }
    if (pcVar6[3] == cVar2) {
      local_8 = (undefined2)*(undefined4 *)pcVar6;
    }
    else {
      local_8 = 0;
    }
    if (pcVar6[0x13] == cVar2) {
      param_2._0_2_ = (short)(char)-((char)bVar1 >> 1 & 1U) & (ushort)*(undefined4 *)(pcVar6 + 0x10)
      ;
    }
    else {
      param_2._0_2_ = 0;
    }
    iVar4 = (int)(char)local_c - (int)(char)local_8;
    iVar9 = (int)(char)local_8 - (int)(char)param_2;
    iVar7 = (int)(char)param_2 - (int)(char)local_c;
    iVar5 = (int)local_c._1_1_ - (int)local_8._1_1_;
    iVar10 = (int)local_8._1_1_ - (int)param_2._1_1_;
    iVar8 = (int)param_2._1_1_ - (int)local_c._1_1_;
    local_10 = CONCAT11(((byte)iVar5 & (byte)((uint)iVar5 >> 8)) + local_8._1_1_ ^
                        ((byte)iVar10 & (byte)((uint)iVar10 >> 8)) + param_2._1_1_ ^
                        ((byte)iVar8 & (byte)((uint)iVar8 >> 8)) + local_c._1_1_,
                        (char)local_c + ((byte)iVar7 & (byte)((uint)iVar7 >> 8)) ^
                        ((byte)iVar4 & (byte)((uint)iVar4 >> 8)) + (char)local_8 ^
                        ((byte)iVar9 & (byte)((uint)iVar9 >> 8)) + (char)param_2);
  }
  *(int *)(param_3 + 0x10) = (int)*pcVar3 - (int)(char)local_10;
  *(int *)(param_3 + 0x14) = (int)pcVar3[1] - (int)(char)(local_10 >> 8);
  return;
}


