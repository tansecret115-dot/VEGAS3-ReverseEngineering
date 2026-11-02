/* Module: sfcdi.dll
   Function: cdr_BufferToDataQBCD
   Address: 5bf018a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_BufferToDataQBCD(struct tDATAQ *,unsigned char *) */

void cdr_BufferToDataQBCD(tDATAQ *param_1,uchar *param_2)

{
  byte bVar1;
  uchar *puVar2;
  tDATAQ tVar3;
  int iVar4;
  tDATAQ *ptVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
                    /* 0x18a0  161  ?cdr_BufferToDataQBCD@@YGXPAUtDATAQ@@PAE@Z */
  puVar2 = param_2;
  *(uint *)param_1 = *param_2 & 0xf0;
  uVar6 = *param_2 & 0xf;
  pbVar8 = param_2 + 1;
  *(uint *)(param_1 + 4) = uVar6;
  if (uVar6 == 1) {
    if (*pbVar8 == 0xaa) {
      param_2 = (uchar *)CONCAT31(param_2._1_3_,0xaa);
    }
    else {
      FUN_5bf2b830((char *)&param_2,*pbVar8);
    }
    *(uint *)(param_1 + 8) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[2]);
    *(uint *)(param_1 + 0xc) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[3]);
    *(uint *)(param_1 + 0x10) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[4]);
    *(uint *)(param_1 + 0x14) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[5]);
    *(uint *)(param_1 + 0x18) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[7]);
    *(uint *)(param_1 + 0x1c) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[8]);
    *(uint *)(param_1 + 0x20) = (uint)param_2 & 0xff;
    FUN_5bf2b830((char *)&param_2,puVar2[9]);
    *(uint *)(param_1 + 0x24) = (uint)param_2 & 0xff;
    return;
  }
  if (uVar6 == 2) {
    iVar4 = 6;
    ptVar5 = param_1 + 9;
    do {
      ptVar5[-1] = (tDATAQ)((*pbVar8 >> 4) + 0x30);
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *ptVar5 = (tDATAQ)((bVar1 & 0xf) + 0x30);
      iVar4 = iVar4 + -1;
      ptVar5 = ptVar5 + 2;
    } while (iVar4 != 0);
  }
  else {
    if (uVar6 != 3) {
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    uVar6 = 0;
    iVar4 = 4;
    do {
      bVar1 = *pbVar8;
      uVar6 = uVar6 << 8 | (uint)bVar1;
      pbVar8 = pbVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar7 = 0;
    param_1[8] = (tDATAQ)(bVar1 & 3);
    do {
      tVar3 = (tDATAQ)((byte)(uVar6 >> 0x1a) + 0x30);
      param_1[uVar7 + 9] = tVar3;
      param_2 = (uchar *)CONCAT31(param_2._1_3_,tVar3);
      uVar6 = uVar6 << 6;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    iVar4 = 3;
    ptVar5 = param_1 + 0xf;
    do {
      ptVar5[-1] = (tDATAQ)((*pbVar8 >> 4) + 0x30);
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *ptVar5 = (tDATAQ)((bVar1 & 0xf) + 0x30);
      iVar4 = iVar4 + -1;
      ptVar5 = ptVar5 + 2;
    } while (iVar4 != 0);
  }
  param_1[0x14] = (tDATAQ)((*pbVar8 >> 4) + 0x30);
  FUN_5bf2b830((char *)&param_2,pbVar8[1]);
  *(uint *)(param_1 + 0x18) = (uint)param_2 & 0xff;
  return;
}


