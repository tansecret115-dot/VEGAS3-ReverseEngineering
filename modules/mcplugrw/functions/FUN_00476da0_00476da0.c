/* Module: mcplugrw.dll
   Function: FUN_00476da0
   Address: 00476da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476da0(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte local_8 [2];
  byte local_6 [2];
  byte local_4 [4];
  
  if ((param_1[0x18] & 1U) == 0) {
    FUN_00475b50(param_1,"Missing IHDR before tRNS");
LAB_00476dc0:
    cVar1 = *(char *)((int)param_1 + 0x11e);
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
        FUN_00475b80((int)param_1,"Missing PLTE before tRNS");
      }
      else if (*(ushort *)(param_1 + 0x44) < param_3) {
        FUN_00475b80((int)param_1,"Incorrect tRNS chunk length");
        FUN_00475dc0(param_1,param_3);
        return;
      }
      if (param_3 == 0) {
        FUN_00475b80((int)param_1,"Zero length tRNS chunk");
        FUN_00475dc0(param_1,0);
        return;
      }
      pbVar2 = FUN_00475a80(param_1,param_3);
      param_1[0x5e] = (int)pbVar2;
      param_1[0x19] = param_1[0x19] | 0x2000;
      FUN_00475d90(param_1,pbVar2,param_3);
      *(short *)((int)param_1 + 0x112) = (short)param_3;
    }
    else if (cVar1 == '\x02') {
      if (param_3 != 6) {
        FUN_00475b80((int)param_1,"Incorrect tRNS chunk length");
        FUN_00475dc0(param_1,param_3);
        return;
      }
      FUN_00475d90(param_1,local_8,6);
      *(undefined2 *)((int)param_1 + 0x112) = 1;
      iVar3 = FUN_00475d70(local_8);
      *(short *)((int)param_1 + 0x17d) = (short)iVar3;
      iVar3 = FUN_00475d70(local_6);
      *(short *)((int)param_1 + 0x17f) = (short)iVar3;
      iVar3 = FUN_00475d70(local_4);
      *(short *)((int)param_1 + 0x181) = (short)iVar3;
    }
    else {
      if (cVar1 != '\0') {
        pcVar4 = "tRNS chunk not allowed with alpha channel";
        goto LAB_00476f89;
      }
      if (param_3 != 2) {
        FUN_00475b80((int)param_1,"Incorrect tRNS chunk length");
        FUN_00475dc0(param_1,param_3);
        return;
      }
      FUN_00475d90(param_1,local_8,2);
      *(undefined2 *)((int)param_1 + 0x112) = 1;
      iVar3 = FUN_00475d70(local_8);
      *(short *)((int)param_1 + 0x183) = (short)iVar3;
    }
    iVar3 = FUN_00475dc0(param_1,0);
    if (iVar3 == 0) {
      FUN_0044dcc0((int)param_1,param_2,param_1[0x5e],(uint)*(ushort *)((int)param_1 + 0x112),
                   param_1 + 0x5f);
      return;
    }
  }
  else {
    if ((param_1[0x18] & 4U) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
        FUN_00475b80((int)param_1,"Duplicate tRNS chunk");
        FUN_00475dc0(param_1,param_3);
        return;
      }
      goto LAB_00476dc0;
    }
    pcVar4 = "Invalid tRNS after IDAT";
LAB_00476f89:
    FUN_00475b80((int)param_1,pcVar4);
    FUN_00475dc0(param_1,param_3);
  }
  return;
}


