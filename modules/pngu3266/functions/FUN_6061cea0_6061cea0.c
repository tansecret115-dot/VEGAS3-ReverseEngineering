/* Module: pngu3266.dll
   Function: FUN_6061cea0
   Address: 6061cea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6061cea0(void *this,HANDLE param_1,DWORD param_2,uint param_3,int param_4)

{
  uint uVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  FUN_6061ce80((int)this);
  if ((param_4 == 0) || (param_1 == (HANDLE)0x0)) {
    return 0x80070057;
  }
  uVar1 = FUN_6061ce50();
  uVar1 = param_3 % uVar1;
  *(uint *)((int)this + 0x1c) = uVar1;
  if (uVar1 < param_3) {
    DVar3 = param_3 - uVar1;
  }
  else {
    *(uint *)((int)this + 0x1c) = param_3;
    DVar3 = 0;
  }
  pvVar2 = MapViewOfFile(param_1,4,param_2,DVar3,param_4 + *(int *)((int)this + 0x1c));
  *(LPVOID *)((int)this + 0x14) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    *(int *)((int)this + 0x18) = param_4;
    return 0;
  }
  DVar3 = GetLastError();
  if (DVar3 != 0) {
    DVar3 = GetLastError();
    return DVar3 & 0xffff | 0x80070000;
  }
  return 0;
}


