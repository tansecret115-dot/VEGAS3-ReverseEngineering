/* Module: aifplug.dll
   Function: FUN_5fbe0e40
   Address: 5fbe0e40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbe0e40(uchar *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  uchar *_Source;
  int iVar5;
  undefined4 *puVar6;
  uint local_10;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
  piVar1 = param_3;
  param_2[1] = 0;
  local_c = *param_3;
  FUN_5fbdfdc0(param_1,&local_8);
  uVar2 = FUN_5fbe0690(param_1,(int *)&local_10,&local_c);
  *param_2 = local_10;
  if (uVar2 == 0) {
    if (local_10 != 0) {
      param_3 = (int *)(local_10 * 8);
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)param_3);
      pvVar4 = GlobalLock(pvVar3);
      if (pvVar4 == (LPVOID)0x0) {
        return 0x8007000e;
      }
      param_2[1] = (uint)pvVar4;
      FUN_5fbdfde0(param_1,local_8);
      local_c = *piVar1;
      iVar5 = 0;
      if (0 < (int)local_10) {
        puVar6 = (undefined4 *)((int)pvVar4 + 4);
        _Source = param_1;
        do {
          uVar2 = FUN_5fbe0250(param_1,&local_4,&param_3);
          if (uVar2 != 0) {
LAB_5fbe0f9b:
            if (_Source != (uchar *)0x0) {
              free(_Source);
            }
LAB_5fbe0fa9:
            FUN_5fbe0a40(param_2);
            *param_2 = 0;
            param_2[1] = 0;
            return uVar2;
          }
          puVar6[-1] = local_4;
          pvVar3 = GlobalAlloc(0x42,(int)param_3 + 1);
          pvVar4 = GlobalLock(pvVar3);
          *puVar6 = pvVar4;
          if (pvVar4 == (LPVOID)0x0) {
            uVar2 = 0x8007000e;
            goto LAB_5fbe0f9b;
          }
          _Source = calloc(1,(int)param_3 + 1);
          if (_Source == (uchar *)0x0) {
            uVar2 = 0x8007000e;
            goto LAB_5fbe0fa9;
          }
          uVar2 = FUN_5fbdfe30(param_1,_Source,(uint)param_3);
          if (uVar2 != 0) goto LAB_5fbe0f9b;
          _Source[(int)param_3] = '\0';
          _mbscpy((uchar *)*puVar6,_Source);
          free(_Source);
          _Source = (uchar *)0x0;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar5 < (int)local_10);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


