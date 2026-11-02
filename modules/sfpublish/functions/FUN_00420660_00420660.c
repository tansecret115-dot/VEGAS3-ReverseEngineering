/* Module: sfpublish.dll
   Function: FUN_00420660
   Address: 00420660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00420660(void *this,uint param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  int local_4;
  
  local_4 = -0x7fffbffb;
  iVar4 = -0x7fffbffb;
  if (*(int *)((int)this + 0x60) != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
LAB_004206e8:
      iVar4 = 0;
    }
    else {
      do {
        while( true ) {
          DVar1 = GetTickCount();
          DVar2 = WaitForSingleObject(*(HANDLE *)((int)this + 0x2c),param_1);
          DVar3 = GetTickCount();
          if (DVar2 != 0) break;
          if (*(int *)((int)this + 0x38) == 0) goto LAB_004206e8;
          if (param_1 <= DVar3 - DVar1) {
            return -0x7ffb1fd4;
          }
          param_1 = param_1 - (DVar3 - DVar1);
          local_4 = 0x4e011;
        }
        if (DVar2 == 0x102) {
          return -0x7ffb1fd4;
        }
        iVar4 = local_4;
      } while (local_4 == 0x4e011);
    }
  }
  return iVar4;
}


