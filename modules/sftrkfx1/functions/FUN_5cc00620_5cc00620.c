/* Module: sftrkfx1.dll
   Function: FUN_5cc00620
   Address: 5cc00620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc00620(HKEY param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  HKEY local_4;
  
  local_4 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(param_1,"Pins\\Input\\Types",0,0x2001f,&local_4);
  if (LVar1 != 0) {
    *param_2 = local_4;
    return 0x80070005;
  }
  *param_2 = local_4;
  return 0;
}


