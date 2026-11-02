/* Module: encn3260.dll
   Function: FUN_66492ae0
   Address: 66492ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66492ae0(void *this,undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  uint local_8;
  
  pcVar1 = (char *)*param_1;
  if ((pcVar1 == (char *)0x0) || (*param_2 == 0)) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)(pcVar1 + 3);
    if (*pcVar1 < '\0') {
      pbVar3 = (byte *)(pcVar1 + 5);
    }
    local_8 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
              (uint)pbVar3[3];
    pbVar3 = pbVar3 + 4;
  }
  if (pbVar3 == (byte *)0x0) {
    *param_2 = 0;
    return 0x80040009;
  }
  *param_2 = (int)(pcVar1 + (*param_2 - (int)pbVar3));
  *param_1 = pbVar3;
  piVar2 = *(int **)((int)this + 0x9e);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x5c) == 0)) {
    (**(code **)(*piVar2 + 0x14))(piVar2,local_8,param_3);
  }
  return 0;
}


