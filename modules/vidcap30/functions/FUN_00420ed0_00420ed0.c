/* Module: vidcap30.exe
   Function: FUN_00420ed0
   Address: 00420ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420ed0(int *param_1,int param_2,int param_3,LPSTR param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char *lpString2;
  
  if (*param_1 == 8) {
    if (param_2 == 0) {
      piVar1 = (int *)param_1[0x143];
    }
    else {
      piVar1 = (int *)param_1[0x100];
    }
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (param_3 < iVar2) {
      lpString2 = (char *)(piVar1[1] * param_3 + piVar1[2]);
    }
    else {
      lpString2 = "No Capture Device";
    }
    lstrcpynA(param_4,lpString2,param_5);
    param_4[param_5 + -1] = '\0';
  }
  return;
}


