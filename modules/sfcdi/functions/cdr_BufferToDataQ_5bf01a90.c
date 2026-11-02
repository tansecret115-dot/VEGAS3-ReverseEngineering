/* Module: sfcdi.dll
   Function: cdr_BufferToDataQ
   Address: 5bf01a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_BufferToDataQ(struct tDATAQ *,unsigned char *) */

void cdr_BufferToDataQ(tDATAQ *param_1,uchar *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  tDATAQ *ptVar4;
  uint uVar5;
  uint uVar6;
  
                    /* 0x1a90  160  ?cdr_BufferToDataQ@@YGXPAUtDATAQ@@PAE@Z */
  *(uint *)param_1 = *param_2 & 0xf0;
  uVar5 = *param_2 & 0xf;
  pbVar2 = param_2 + 1;
  *(uint *)(param_1 + 4) = uVar5;
  if (uVar5 == 1) {
    *(uint *)(param_1 + 8) = (uint)*pbVar2;
    *(uint *)(param_1 + 0xc) = (uint)param_2[2];
    *(uint *)(param_1 + 0x10) = (uint)param_2[3];
    *(uint *)(param_1 + 0x14) = (uint)param_2[4];
    *(uint *)(param_1 + 0x18) = (uint)param_2[5];
    *(uint *)(param_1 + 0x1c) = (uint)param_2[7];
    *(uint *)(param_1 + 0x20) = (uint)param_2[8];
    *(uint *)(param_1 + 0x24) = (uint)param_2[9];
    return;
  }
  if (uVar5 == 2) {
    iVar3 = 6;
    ptVar4 = param_1 + 9;
    do {
      ptVar4[-1] = (tDATAQ)((*pbVar2 >> 4) + 0x30);
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      *ptVar4 = (tDATAQ)((bVar1 & 0xf) + 0x30);
      iVar3 = iVar3 + -1;
      ptVar4 = ptVar4 + 2;
    } while (iVar3 != 0);
  }
  else {
    if (uVar5 != 3) {
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    uVar5 = 0;
    iVar3 = 4;
    do {
      bVar1 = *pbVar2;
      uVar5 = uVar5 << 8 | (uint)bVar1;
      pbVar2 = pbVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar6 = 0;
    param_1[8] = (tDATAQ)(bVar1 & 3);
    do {
      param_1[uVar6 + 9] = (tDATAQ)((byte)(uVar5 >> 0x1a) + 0x30);
      uVar5 = uVar5 << 6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    iVar3 = 3;
    ptVar4 = param_1 + 0xf;
    do {
      ptVar4[-1] = (tDATAQ)((*pbVar2 >> 4) + 0x30);
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      *ptVar4 = (tDATAQ)((bVar1 & 0xf) + 0x30);
      iVar3 = iVar3 + -1;
      ptVar4 = ptVar4 + 2;
    } while (iVar3 != 0);
  }
  param_1[0x14] = (tDATAQ)((*pbVar2 >> 4) + 0x30);
  *(uint *)(param_1 + 0x18) = (uint)pbVar2[1];
  return;
}


