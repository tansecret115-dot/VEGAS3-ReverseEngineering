/* Module: encn3260.dll
   Function: FUN_66485090
   Address: 66485090
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66485090(void *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  bVar1 = true;
  local_c = *(int *)((int)param_1 + 0xfa);
  local_8 = (int)param_1 + 0xf6;
  do {
    if (local_c == 0) {
      return iVar3;
    }
    if (bVar1) {
      bVar1 = false;
    }
    else {
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      iVar3 = FUN_66485100(param_1,(undefined2 *)*puVar2,(int *)0x0,0);
    }
    FUN_664bab40(&local_c);
  } while (iVar3 == 0);
  return iVar3;
}


