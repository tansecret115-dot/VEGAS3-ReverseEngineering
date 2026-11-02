/* Module: sftrans1.dll
   Function: FUN_00542d70
   Address: 00542d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00542d70(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 == *param_1) && (param_2[4] == param_1[4])) &&
     ((char)param_2[5] == (char)param_1[5])) {
    iVar1 = lstrcmpA((LPCSTR)(param_2 + 7),(LPCSTR)(param_1 + 7));
    if ((((iVar1 == 0) && (param_2[2] == param_1[2])) &&
        ((param_2[3] == param_1[3] &&
         ((*(char *)((int)param_2 + 0x15) == *(char *)((int)param_1 + 0x15) &&
          (*(char *)((int)param_2 + 0x16) == *(char *)((int)param_1 + 0x16))))))) &&
       ((*(char *)((int)param_2 + 0x17) == *(char *)((int)param_1 + 0x17) &&
        (((((char)param_2[6] == (char)param_1[6] &&
           (*(char *)((int)param_2 + 0x19) == *(char *)((int)param_1 + 0x19))) &&
          (*(char *)((int)param_2 + 0x1a) == *(char *)((int)param_1 + 0x1a))) &&
         (*(char *)((int)param_2 + 0x1b) == *(char *)((int)param_1 + 0x1b))))))) {
      return 0;
    }
  }
  return 1;
}


