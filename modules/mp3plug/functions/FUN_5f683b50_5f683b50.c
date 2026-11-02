/* Module: mp3plug.dll
   Function: FUN_5f683b50
   Address: 5f683b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f683b50(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  short in_stack_00000554;
  short in_stack_00000752;
  short in_stack_00000950;
  short in_stack_00000b4e;
  uint in_stack_00001352;
  LPCSTR in_stack_00001364;
  int *in_stack_00001368;
  
  FUN_5f72a200();
  puVar3 = (undefined4 *)&stack0x00000508;
  for (iVar2 = 0x395; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  MultiByteToWideChar(0,0,in_stack_00001364,-1,(LPWSTR)&stack0x00000300,0x104);
  iVar2 = FUN_5f68c9c0((LPCWSTR)&stack0x00000300,(undefined4 *)&stack0x00000508,(int *)0x0);
  if (-1 < iVar2) {
    if (in_stack_00000554 != 0) {
      (**(code **)(*in_stack_00001368 + 0x28))();
    }
    if (in_stack_00000752 != 0) {
      (**(code **)(*in_stack_00001368 + 0x28))();
    }
    if (in_stack_00000950 != 0) {
      (**(code **)(*in_stack_00001368 + 0x28))();
    }
    if (in_stack_00000b4e != 0) {
      (**(code **)(*in_stack_00001368 + 0x28))();
    }
    iVar1 = FUN_5f6869b0(in_stack_00001352,&stack0x00000000,0xff);
    if (-1 < iVar1) {
      MultiByteToWideChar(0,0,&stack0x00000000,-1,(LPWSTR)&stack0x00000100,0xff);
      (**(code **)(*in_stack_00001368 + 0x28))();
    }
  }
  return iVar2;
}


