/* Module: Setup.exe
   Function: FUN_0040b710
   Address: 0040b710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040b710(void *this,HANDLE param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  byte *lpBuffer;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD nNumberOfBytesToRead;
  bool bVar7;
  int local_230;
  DWORD DStack_22c;
  uint local_228;
  int local_224;
  uint uStack_220;
  DWORD local_21c;
  DWORD local_218;
  uint uStack_214;
  DWORD local_210;
  DWORD local_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_230 = 0;
  DVar2 = GetFileSize(param_1,&local_20c);
  DVar6 = local_20c;
  local_218 = local_20c;
  local_228 = 0;
  local_224 = 0;
  local_21c = DVar2;
  local_210 = DVar2;
  if (*(int *)((int)this + 0x20) != 0) {
    MultiByteToWideChar(0,1,(LPCSTR)(param_2 + 0x48),-1,local_208,0x104);
    local_2 = 0;
    FUN_0041d0f0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa1);
  }
  pvVar3 = GlobalAlloc(0x42,0x40000);
  lpBuffer = GlobalLock(pvVar3);
  if (lpBuffer == (byte *)0x0) {
    FUN_00410c30(this,0xaaaaaaa3,(uchar *)"NoCompressFile",(uchar *)0x0);
    local_230 = -0x7ff8fff2;
  }
  else {
    uStack_214 = FUN_0041d1e0(0,(byte *)0x0,0);
    uStack_220 = FUN_0041d1e0(0,(byte *)0x0,0);
    if ((-1 < (int)DVar6) && ((0 < (int)DVar6 || (DVar2 != 0)))) {
      while (-1 < local_230) {
        nNumberOfBytesToRead = DVar2 - local_228;
        iVar4 = (DVar6 - local_224) - (uint)(DVar2 < local_228);
        if ((-1 < iVar4) &&
           ((iVar4 != 0 &&
             SBORROW4(DVar6,local_224) == SBORROW4(DVar6 - local_224,(uint)(DVar2 < local_228)) ||
            (0x40000 < nNumberOfBytesToRead)))) {
          nNumberOfBytesToRead = 0x40000;
          iVar4 = 0;
        }
        DStack_22c = 0;
        BVar5 = ReadFile(param_1,lpBuffer,nNumberOfBytesToRead,&DStack_22c,(LPOVERLAPPED)0x0);
        if (((BVar5 == 0) || (nNumberOfBytesToRead != DStack_22c)) || (iVar4 != 0)) {
          FUN_00410c30(this,0xaaaaaaaa,(uchar *)"NoCompressFile",(uchar *)0x0);
          local_230 = -0x7ffb1ff8;
          break;
        }
        uStack_214 = FUN_0041d1e0(uStack_214,lpBuffer,nNumberOfBytesToRead);
        bVar7 = local_21c < DStack_22c;
        local_21c = local_21c - DStack_22c;
        local_218 = local_218 - bVar7;
        WriteFile(*(HANDLE *)((int)this + 0xc),lpBuffer,nNumberOfBytesToRead,&DStack_22c,
                  (LPOVERLAPPED)0x0);
        uStack_220 = FUN_0041d1e0(uStack_220,lpBuffer,DStack_22c);
        if ((*(int *)((int)this + 0x20) != 0) &&
           ((local_230 = FUN_0041d030(*(int *)((int)this + 0x20)), local_230 == -0x7ffb1ff4 ||
            (local_230 = (**(code **)(**(int **)((int)this + 0x20) + 0x10))(DStack_22c,0),
            local_230 < 0)))) break;
        uVar1 = *(uint *)((int)this + 0x18);
        *(uint *)((int)this + 0x18) = uVar1 + DStack_22c;
        bVar7 = CARRY4(local_228,DStack_22c);
        local_228 = local_228 + DStack_22c;
        *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar1,DStack_22c);
        local_224 = local_224 + (uint)bVar7;
        DVar6 = local_20c;
        DVar2 = local_210;
        if (((int)local_218 < 1) && (((int)local_218 < 0 || (local_21c == 0)))) break;
      }
    }
    *(uint *)(param_2 + 0x24) = local_228;
    *(int *)(param_2 + 0x28) = local_224;
    *(uint *)(param_2 + 0x20) = uStack_214;
    *(uint *)(param_2 + 0x1c) = uStack_220;
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
  }
  if (*(int **)((int)this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0);
  }
  return local_230;
}


