/* Module: sfcdi.dll
   Function: cdtext_IsCDTextValid
   Address: 5bf10c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdtext_IsCDTextValid(struct _sfcdtext const *) */

int cdtext_IsCDTextValid(_sfcdtext *param_1)

{
  uint uVar1;
  _sfcdtext *p_Var2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  
                    /* 0x10c50  219  ?cdtext_IsCDTextValid@@YGHPBU_sfcdtext@@@Z */
  if (param_1 == (_sfcdtext *)0x0) {
    return 0;
  }
  p_Var2 = param_1 + 0x1c;
  uVar1 = 0;
  do {
    if (*(int *)p_Var2 != 0) {
      return 1;
    }
    p_Var2 = p_Var2 + 0xa4;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  uVar1 = cdtext_GetTrackCount(param_1);
  uVar6 = 0;
  if (uVar1 != 0) {
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x498) + 8);
    do {
      piVar4 = (int *)*puVar5;
      uVar3 = 0;
      do {
        if (*piVar4 != 0) {
          return 1;
        }
        piVar4 = piVar4 + 0x29;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 7);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < uVar1);
  }
  return (uint)(*(int *)param_1 != 0);
}


