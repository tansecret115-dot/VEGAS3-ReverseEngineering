/* Module: vfplugs.dll
   Function: FUN_0046fcf0
   Address: 0046fcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046fcf0(HDC param_1,int *param_2,int *param_3)

{
  RECT local_10;
  
  local_10.left = *param_2;
  if (local_10.left <= *param_3) {
    local_10.top = param_2[1];
    local_10.bottom = param_3[1];
    if (((local_10.top <= local_10.bottom) &&
        (local_10.right = param_2[2], param_3[2] <= local_10.right)) && (param_3[3] <= param_2[3]))
    {
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      local_10.left = *param_2;
      local_10.top = param_3[3];
      local_10.right = param_2[2];
      local_10.bottom = param_2[3];
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      local_10.left = *param_2;
      local_10.top = param_3[1];
      local_10.right = *param_3;
      local_10.bottom = param_3[3];
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      local_10.left = param_3[2];
      local_10.top = param_3[1];
      local_10.right = param_2[2];
      local_10.bottom = param_3[3];
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  return;
}


