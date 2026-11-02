/* Module: sctplug.dll
   Function: FUN_0040b3c0
   Address: 0040b3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b3c0(HANDLE param_1,LPCVOID param_2,short *param_3,int param_4,undefined4 param_5,
                LPCVOID param_6,uint param_7)

{
  short sVar1;
  bool bVar2;
  short *lpBuffer;
  LPCVOID pvVar3;
  int iVar4;
  DWORD nNumberOfBytesToWrite;
  BOOL BVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_20 [8];
  
  lpBuffer = param_3;
  bVar8 = param_2 != (LPCVOID)0x0;
  bVar2 = false;
  if (bVar8) {
    if ((*param_3 == 1) || (*param_3 == 3)) {
      bVar2 = true;
      puVar6 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    else if (param_3[8] != 0x16) {
      bVar8 = false;
    }
  }
  sVar1 = *param_3;
  if ((sVar1 == 3) || (sVar1 == 1)) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = (ushort)param_3[8] + 0x12;
  }
  iVar7 = iVar4 + 0x14;
  if (bVar2) {
    iVar7 = iVar4 + 0x2c;
  }
  if (bVar8) {
    iVar7 = iVar7 + 0x1b0;
  }
  else if ((sVar1 == 1) || (sVar1 == 3)) goto LAB_0040b462;
  iVar7 = iVar7 + 0xc;
LAB_0040b462:
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar4 = FUN_004142d0(param_1,0x45564157,param_4 + iVar7);
  if (iVar4 < 0) {
    return -0x7ffb1ff7;
  }
  iVar4 = FUN_004141c0(param_1);
  if (-1 < iVar4) {
    if ((*lpBuffer == 3) || (*lpBuffer == 1)) {
      nNumberOfBytesToWrite = 0x10;
    }
    else {
      nNumberOfBytesToWrite = (ushort)lpBuffer[8] + 0x12;
    }
    BVar5 = WriteFile(param_1,lpBuffer,nNumberOfBytesToWrite,(LPDWORD)&param_3,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      return -0x7ffb1ff7;
    }
    if ((bVar2) &&
       (BVar5 = WriteFile(param_1,local_20,0x18,(LPDWORD)&param_3,(LPOVERLAPPED)0x0), BVar5 == 0)) {
      return -0x7ffb1ff7;
    }
    pvVar3 = param_6;
    if (bVar8) {
      iVar4 = FUN_004141c0(param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      FUN_0040b640((int)param_2,lpBuffer,(uint)pvVar3,param_7);
      BVar5 = WriteFile(param_1,param_2,0x1a8,(LPDWORD)&param_3,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        return -0x7ffb1ff7;
      }
      if ((bVar2) &&
         (BVar5 = WriteFile(param_1,local_20,0xc,(LPDWORD)&param_3,(LPOVERLAPPED)0x0), BVar5 == 0))
      {
        return -0x7ffb1ff7;
      }
    }
    if ((*lpBuffer != 1) && (*lpBuffer != 3)) {
      iVar4 = FUN_004141c0(param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      param_2 = pvVar3;
      BVar5 = WriteFile(param_1,&param_2,4,(LPDWORD)&param_3,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        return -0x7ffb1ff7;
      }
    }
    iVar4 = FUN_004141c0(param_1);
  }
  return iVar4;
}


