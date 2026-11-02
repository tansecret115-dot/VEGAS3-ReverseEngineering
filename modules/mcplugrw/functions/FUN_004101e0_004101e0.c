/* Module: mcplugrw.dll
   Function: FUN_004101e0
   Address: 004101e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004101e0(void *this,LPSTR param_1,int param_2)

{
  undefined1 local_1c [4];
  CHAR local_18 [12];
  uchar local_c [12];
  
  if (*(char *)((int)this + 0x78c) != '\0') {
    lstrcpynA(param_1,(LPSTR)((int)this + 0x78c),param_2);
    param_1[param_2 + -1] = '\0';
    return;
  }
  FUN_00418c80(1,local_c);
  FUN_00410350(this,local_1c);
  wsprintfA(local_18,"%s-%s",local_c,local_1c);
  lstrcpynA(param_1,local_18,param_2);
  param_1[param_2 + -1] = '\0';
  lstrcpynA((LPSTR)((int)this + 0x78c),local_18,0xb);
  *(undefined1 *)((int)this + 0x796) = 0;
  return;
}


