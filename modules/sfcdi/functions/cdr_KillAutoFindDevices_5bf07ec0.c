/* Module: sfcdi.dll
   Function: cdr_KillAutoFindDevices
   Address: 5bf07ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_KillAutoFindDevices(struct tSFLIST * *) */

long cdr_KillAutoFindDevices(tSFLIST **param_1)

{
                    /* 0x7ec0  189  ?cdr_KillAutoFindDevices@@YGJPAPAUtSFLIST@@@Z */
  if (*param_1 != (tSFLIST *)0x0) {
    FUN_5bf2b040((int *)*param_1);
    *param_1 = (tSFLIST *)0x0;
  }
  return 0;
}


