/* Module: vegas30k.dll
   Function: cdr_FormatISRC
   Address: 01099950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_FormatISRC(char *,char *) */

int cdr_FormatISRC(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_10;
  char local_f;
  undefined1 local_e;
  char local_c;
  char local_b;
  char local_a;
  undefined1 local_9;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  char local_4;
  undefined1 local_3;
  
                    /* 0x99950  593  ?cdr_FormatISRC@@YGHPAD0@Z */
  pcVar1 = param_2;
  local_10 = *param_2;
  local_f = param_2[1];
  local_c = param_2[2];
  local_e = 0;
  local_b = param_2[3];
  local_9 = 0;
  local_a = param_2[4];
  local_3 = 0;
  pcVar2 = param_2 + 7;
  param_2 = (char *)(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 5)) &
                    0xff00ffff);
  local_8 = *pcVar2;
  local_7 = pcVar1[8];
  local_6 = pcVar1[9];
  local_5 = pcVar1[10];
  local_4 = pcVar1[0xb];
  SfPrintF(param_1,"%s-%s-%s-%s",&local_10,&local_c,&param_2,&local_8);
  iVar3 = lstrlenA(param_1);
  return iVar3;
}


