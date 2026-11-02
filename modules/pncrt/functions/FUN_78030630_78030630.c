/* Module: pncrt.dll
   Function: FUN_78030630
   Address: 78030630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78030630(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  int local_4;
  
  pwVar3 = u_____78040ce8;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      pwVar3 = (wchar_t *)0x78040e48;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      pwVar3 = pwVar3 + 0x2a;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        pwVar2 = pwVar3 + uVar1 * 6;
        if (0x7fff < (ushort)pwVar3[uVar1 * 6]) {
          local_c = (wchar_t)*(int *)pwVar2;
          uStack_a._0_2_ = (undefined2)((uint)*(int *)pwVar2 >> 0x10);
          uStack_a._2_2_ = (undefined2)*(int *)(pwVar2 + 2);
          uStack_6 = (undefined2)((uint)*(int *)(pwVar2 + 2) >> 0x10);
          local_4 = *(int *)(pwVar2 + 4);
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          pwVar2 = &local_c;
        }
        FUN_78030370(param_1,(int *)pwVar2);
      }
    }
  }
  return;
}


