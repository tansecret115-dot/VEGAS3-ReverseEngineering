/* Module: vidcap30.exe
   Function: WebBrowse_AppTerminate
   Address: 0049ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall WebBrowse_AppTerminate(struct HINSTANCE__ *) */

void WebBrowse_AppTerminate(HINSTANCE__ *param_1)

{
                    /* 0x9ac40  145  ?WebBrowse_AppTerminate@@YGXPAUHINSTANCE__@@@Z */
  UnregisterClassA("SfKrn_WebBrowseInner_Class",param_1);
  UnregisterClassA("SfKrn_WebBrowse_Class",param_1);
  return;
}


