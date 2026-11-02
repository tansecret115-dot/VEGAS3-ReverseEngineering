/* Module: vidcap30.exe
   Function: FUN_0042a180
   Address: 0042a180
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * FUN_0042a180(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  wchar_t *local_4;
  
  local_4 = (wchar_t *)0x0;
  puVar2 = (undefined4 *)FUN_0046dc00(0,&local_4);
  pwVar3 = local_4;
  if (-1 < (int)local_4) {
    pwVar3 = (wchar_t *)(**(code **)*puVar2)(puVar2,&DAT_005a1ca8,(undefined4 *)(param_1 + 0x850));
    if (-1 < (int)pwVar3) {
      pwVar3 = (wchar_t *)(**(code **)*puVar2)(puVar2,&DAT_0058a1e8,(undefined4 *)(param_1 + 0x854))
      ;
      if (-1 < (int)pwVar3) {
        pwVar3 = (wchar_t *)
                 (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                           (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x850));
        if (-1 < (int)pwVar3) {
          piVar1 = *(int **)(param_1 + 0x854);
          (**(code **)(*piVar1 + 0x10))(piVar1,0);
          pwVar3 = L"SF:C-SF In Out";
        }
      }
    }
  }
  return pwVar3;
}


