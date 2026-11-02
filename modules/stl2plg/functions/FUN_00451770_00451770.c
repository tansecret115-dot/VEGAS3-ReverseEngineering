/* Module: stl2plg.dll
   Function: FUN_00451770
   Address: 00451770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00451770(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte local_8 [2];
  byte local_6 [2];
  byte local_4 [4];
  
  if ((param_1[0x18] & 1U) == 0) {
    FUN_0044fa30(param_1,"Missing IHDR before tRNS");
LAB_00451790:
    cVar1 = *(char *)((int)param_1 + 0x11e);
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
        FUN_0044fa60((int)param_1,"Missing PLTE before tRNS");
      }
      else if (*(ushort *)(param_1 + 0x44) < param_3) {
        FUN_0044fa60((int)param_1,"Incorrect tRNS chunk length");
        FUN_00450790(param_1,param_3);
        return;
      }
      if (param_3 == 0) {
        FUN_0044fa60((int)param_1,"Zero length tRNS chunk");
        FUN_00450790(param_1,0);
        return;
      }
      pbVar2 = FUN_0044fc90(param_1,param_3);
      param_1[0x5e] = (int)pbVar2;
      param_1[0x19] = param_1[0x19] | 0x2000;
      FUN_00450760(param_1,pbVar2,param_3);
      *(short *)((int)param_1 + 0x112) = (short)param_3;
    }
    else if (cVar1 == '\x02') {
      if (param_3 != 6) {
        FUN_0044fa60((int)param_1,"Incorrect tRNS chunk length");
        FUN_00450790(param_1,param_3);
        return;
      }
      FUN_00450760(param_1,local_8,6);
      *(undefined2 *)((int)param_1 + 0x112) = 1;
      iVar3 = FUN_00450740(local_8);
      *(short *)((int)param_1 + 0x17d) = (short)iVar3;
      iVar3 = FUN_00450740(local_6);
      *(short *)((int)param_1 + 0x17f) = (short)iVar3;
      iVar3 = FUN_00450740(local_4);
      *(short *)((int)param_1 + 0x181) = (short)iVar3;
    }
    else {
      if (cVar1 != '\0') {
        pcVar4 = "tRNS chunk not allowed with alpha channel";
        goto LAB_00451959;
      }
      if (param_3 != 2) {
        FUN_0044fa60((int)param_1,"Incorrect tRNS chunk length");
        FUN_00450790(param_1,param_3);
        return;
      }
      FUN_00450760(param_1,local_8,2);
      *(undefined2 *)((int)param_1 + 0x112) = 1;
      iVar3 = FUN_00450740(local_8);
      *(short *)((int)param_1 + 0x183) = (short)iVar3;
    }
    iVar3 = FUN_00450790(param_1,0);
    if (iVar3 == 0) {
      FUN_00457a50((int)param_1,param_2,param_1[0x5e],(uint)*(ushort *)((int)param_1 + 0x112),
                   param_1 + 0x5f);
      return;
    }
  }
  else {
    if ((param_1[0x18] & 4U) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
        FUN_0044fa60((int)param_1,"Duplicate tRNS chunk");
        FUN_00450790(param_1,param_3);
        return;
      }
      goto LAB_00451790;
    }
    pcVar4 = "Invalid tRNS after IDAT";
LAB_00451959:
    FUN_0044fa60((int)param_1,pcVar4);
    FUN_00450790(param_1,param_3);
  }
  return;
}


