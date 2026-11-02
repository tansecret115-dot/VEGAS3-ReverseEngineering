/* Module: vegas30k.dll
   Function: DoneBarTerminate
   Address: 010727e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DoneBarTerminate(struct HINSTANCE__ *,char const *) */

int DoneBarTerminate(HINSTANCE__ *param_1,char *param_2)

{
  BOOL BVar1;
  
                    /* 0x727e0  33  ?DoneBarTerminate@@YGHPAUHINSTANCE__@@PBD@Z */
  BVar1 = UnregisterClassA(param_2,param_1);
  return BVar1;
}


