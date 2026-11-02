/* Module: pncrt.dll
   Function: FUN_78007870
   Address: 78007870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78007870(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *_Dst;
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *_Src;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  size_t _Size;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_78036a08;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  if (((*(int *)(param_3 + 4) != 0) && (*(char *)(*(int *)(param_3 + 4) + 8) != '\0')) &&
     (*(int *)(param_3 + 8) != 0)) {
    _Dst = (int *)(param_2 + 0xc + *(int *)(param_3 + 8));
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          ExceptionList = &local_14;
          bVar1 = FUN_78008450(*(void **)(param_1 + 0x18),1);
          if ((CONCAT31(extraout_var_03,bVar1) != 0) &&
             (bVar1 = FUN_78008470(_Dst,1), CONCAT31(extraout_var_04,bVar1) != 0)) {
            _Size = *(size_t *)(param_4 + 0x14);
            _Src = (void *)FUN_78007b00(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            memmove(_Dst,_Src,_Size);
            ExceptionList = local_14;
            return;
          }
        }
        else {
          ExceptionList = &local_14;
          bVar1 = FUN_78008450(*(void **)(param_1 + 0x18),1);
          if (((CONCAT31(extraout_var_05,bVar1) != 0) &&
              (bVar1 = FUN_78008470(_Dst,1), CONCAT31(extraout_var_06,bVar1) != 0)) &&
             (bVar1 = FUN_78008490(*(FARPROC *)(param_4 + 0x18)),
             CONCAT31(extraout_var_07,bVar1) != 0)) {
            if ((*param_4 & 4) != 0) {
              FUN_78007b00(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
              FUN_78007d00(_Dst,*(undefined **)(param_4 + 0x18));
              ExceptionList = local_14;
              return;
            }
            FUN_78007b00(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_78007d00(_Dst,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
        }
      }
      else {
        ExceptionList = &local_14;
        bVar1 = FUN_78008450(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
           (bVar1 = FUN_78008470(_Dst,1), CONCAT31(extraout_var_02,bVar1) != 0)) {
          memmove(_Dst,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
          if (*(int *)(param_4 + 0x14) != 4) {
            ExceptionList = local_14;
            return;
          }
          if (*_Dst == 0) {
            ExceptionList = local_14;
            return;
          }
          iVar2 = FUN_78007b00(*_Dst,(int *)(param_4 + 8));
          *_Dst = iVar2;
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar1 = FUN_78008450(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var,bVar1) != 0) &&
         (bVar1 = FUN_78008470(_Dst,1), CONCAT31(extraout_var_00,bVar1) != 0)) {
        iVar2 = *(int *)(param_1 + 0x18);
        *_Dst = iVar2;
        iVar2 = FUN_78007b00(iVar2,(int *)(param_4 + 8));
        *_Dst = iVar2;
        ExceptionList = local_14;
        return;
      }
    }
    FUN_78007be0();
  }
  ExceptionList = local_14;
  return;
}


