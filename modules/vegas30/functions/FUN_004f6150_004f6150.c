/* Module: vegas30.exe
   Function: FUN_004f6150
   Address: 004f6150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f6150(HWND param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  CHAR local_40 [64];
  
  iVar1 = DAT_0064b138;
  local_40[0] = '\0';
  if (DAT_0064b138 != 0) {
    uVar2 = FUN_005ba4b0(DAT_0064b138,0);
    fVar3 = (float10)FUN_005b8c00(iVar1,uVar2);
    uVar2 = ftol((double)fVar3);
    SfPrintF(local_40,"$d frames at $.3f fps",uVar2);
  }
  SetDlgItemTextA(param_1,param_3,local_40);
  return;
}


