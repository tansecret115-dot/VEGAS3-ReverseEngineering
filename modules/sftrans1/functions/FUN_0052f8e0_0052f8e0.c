/* Module: sftrans1.dll
   Function: FUN_0052f8e0
   Address: 0052f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0052f8e0(int param_1,LPSTR param_2,int param_3)

{
  undefined1 local_1c [4];
  CHAR local_18 [12];
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0x78c) != '\0') {
    lstrcpynA(param_2,(LPSTR)(param_1 + 0x78c),param_3);
    param_2[param_3 + -1] = '\0';
    return;
  }
  FUN_00537d90(1,local_c,0xb);
  FUN_0052fa50(local_1c,3);
  wsprintfA(local_18,"%s-%s",local_c,local_1c);
  lstrcpynA(param_2,local_18,param_3);
  param_2[param_3 + -1] = '\0';
  lstrcpynA((LPSTR)(param_1 + 0x78c),local_18,0xb);
  *(undefined1 *)(param_1 + 0x796) = 0;
  return;
}


