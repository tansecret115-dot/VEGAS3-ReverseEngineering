/* Module: aviplug.dll
   Function: FUN_5f9339f0
   Address: 5f9339f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f9339f0(DWORD param_1,uint param_2,uint param_3,uint param_4,LPVOID param_5,
                   DWORD param_6,DWORD *param_7)

{
  DWORD DVar1;
  LPVOID lpBuffer;
  uint *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_c;
  int local_8;
  int local_4;
  
  DVar1 = param_1;
  local_c = 0;
  DVar4 = 0;
  if (*(HANDLE *)(param_1 + 600) == (HANDLE)0xffffffff) {
LAB_5f933aa7:
    *param_7 = DVar4;
    return (uint *)0x8004406d;
  }
  puVar2 = FUN_5f94e0f0(*(HANDLE *)(param_1 + 600),param_2,param_3,param_4,&param_1,&param_2);
  lpBuffer = param_5;
  if ((int)puVar2 < 0) {
    *param_7 = local_c;
    return (uint *)((-(uint)(puVar2 != (uint *)0x8004e00a) & 0xfffffffa) + 0x80044073);
  }
  DVar4 = param_1;
  if (param_5 != (LPVOID)0x0) {
    if ((int)param_6 <= (int)param_1) {
      param_1 = param_6;
    }
    local_8 = param_2 + 8;
    local_4 = param_3 + (0xfffffff7 < param_2);
    SetFilePointer(*(HANDLE *)(DVar1 + 600),local_8,&local_4,0);
    BVar3 = ReadFile(*(HANDLE *)(DVar1 + 600),lpBuffer,param_1,&local_c,(LPOVERLAPPED)0x0);
    DVar4 = local_c;
    if ((BVar3 == 0) || (local_c < param_1)) goto LAB_5f933aa7;
  }
  *param_7 = DVar4;
  return puVar2;
}


