{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"bf","path":"bf","contentType":"directory"},{"name":"errors.c","path":"errors.c","contentType":"file"},{"name":"file_tools.c","path":"file_tools.c","contentType":"file"},{"name":"main.c","path":"main.c","contentType":"file"},{"name":"monty.h","path":"monty.h","contentType":"file"},{"name":"stack_func1.c","path":"stack_func1.c","contentType":"file"},{"name":"stack_func2.c","path":"stack_func2.c","contentType":"file"},{"name":"stack_op.c","path":"stack_op.c","contentType":"file"},{"name":"stack_strings.c","path":"stack_strings.c","contentType":"file"}],"totalCount":9}},"fileTreeProcessingTime":2.391364,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":682627323,"defaultBranch":"main","name":"monty","ownerLogin":"sadatmisr","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-08-24T15:17:33.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/130691074?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1692890361.0","canEdit":false,"refType":"branch","currentOid":"b5394114697cb430a376e809eb1589246a6ace63"},"path":"errors.c","currentUser":null,"blob":{"rawLines":["#include \"monty.h\"","","/**"," * err - Prints appropiate error messages determined by their error code."," * @error_code: The error codes are the following:"," * (1) => The user does not give any file or more than one file to the program."," * (2) => The file provided is not a file that can be opened or read."," * (3) => The file provided contains an invalid instruction."," * (4) => When the program is unable to malloc more memory."," * (5) => When the parameter passed to the instruction \"push\" is not an int."," * (6) => When the stack it empty for pint."," * (7) => When the stack it empty for pop."," * (8) => When stack is too short for operation."," */","void err(int error_code, ...)","{","\tva_list ag;","\tchar *op;","\tint l_num;","","\tva_start(ag, error_code);","\tswitch (error_code)","\t{","\t\tcase 1:","\t\t\tfprintf(stderr, \"USAGE: monty file\\n\");","\t\t\tbreak;","\t\tcase 2:","\t\t\tfprintf(stderr, \"Error: Can't open file %s\\n\",","\t\t\t\tva_arg(ag, char *));","\t\t\tbreak;","\t\tcase 3:","\t\t\tl_num = va_arg(ag, int);","\t\t\top = va_arg(ag, char *);","\t\t\tfprintf(stderr, \"L%d: unknown instruction %s\\n\", l_num, op);","\t\t\tbreak;","\t\tcase 4:","\t\t\tfprintf(stderr, \"Error: malloc failed\\n\");","\t\t\tbreak;","\t\tcase 5:","\t\t\tfprintf(stderr, \"L%d: usage: push integer\\n\", va_arg(ag, int));","\t\t\tbreak;","\t\tdefault:","\t\t\tbreak;","\t}","\tfree_nodes();","\texit(EXIT_FAILURE);","}","","/**"," * more_err - handles errors."," * @error_code: The error codes are the following:"," * (6) => When the stack it empty for pint."," * (7) => When the stack it empty for pop."," * (8) => When stack is too short for operation."," * (9) => Division by zero."," */","void more_err(int error_code, ...)","{","\tva_list ag;","\tchar *op;","\tint l_num;","","\tva_start(ag, error_code);","\tswitch (error_code)","\t{","\t\tcase 6:","\t\t\tfprintf(stderr, \"L%d: can't pint, stack empty\\n\",","\t\t\t\tva_arg(ag, int));","\t\t\tbreak;","\t\tcase 7:","\t\t\tfprintf(stderr, \"L%d: can't pop an empty stack\\n\",","\t\t\t\tva_arg(ag, int));","\t\t\tbreak;","\t\tcase 8:","\t\t\tl_num = va_arg(ag, unsigned int);","\t\t\top = va_arg(ag, char *);","\t\t\tfprintf(stderr, \"L%d: can't %s, stack too short\\n\", l_num, op);","\t\t\tbreak;","\t\tcase 9:","\t\t\tfprintf(stderr, \"L%d: division by zero\\n\",","\t\t\t\tva_arg(ag, unsigned int));","\t\t\tbreak;","\t\tdefault:","\t\t\tbreak;","\t}","\tfree_nodes();","\texit(EXIT_FAILURE);","}","","/**"," * string_err - handles errors."," * @error_code: The error codes are the following:"," * (10) ~> The number inside a node is outside ASCII bounds."," * (11) ~> The stack is empty."," */","void string_err(int error_code, ...)","{","\tva_list ag;","\tint l_num;","","\tva_start(ag, error_code);","\tl_num = va_arg(ag, int);","\tswitch (error_code)","\t{","\t\tcase 10:","\t\t\tfprintf(stderr, \"L%d: can't pchar, value out of range\\n\", l_num);","\t\t\tbreak;","\t\tcase 11:","\t\t\tfprintf(stderr, \"L%d: can't pchar, stack empty\\n\", l_num);","\t\t\tbreak;","\t\tdefault:","\t\t\tbreak;","\t}","\tfree_nodes();","\texit(EXIT_FAILURE);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":73,"cssClass":"pl-c"}],[{"start":0,"end":50,"cssClass":"pl-c"}],[{"start":0,"end":79,"cssClass":"pl-c"}],[{"start":0,"end":69,"cssClass":"pl-c"}],[{"start":0,"end":60,"cssClass":"pl-c"}],[{"start":0,"end":59,"cssClass":"pl-c"}],[{"start":0,"end":76,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":42,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":8,"cssClass":"pl-en"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":23,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":11,"cssClass":"pl-s1"}],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":7,"end":9,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":9,"cssClass":"pl-en"},{"start":10,"end":12,"cssClass":"pl-s1"},{"start":14,"end":24,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":40,"cssClass":"pl-s"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":48,"cssClass":"pl-s"}],[{"start":4,"end":10,"cssClass":"pl-en"},{"start":11,"end":13,"cssClass":"pl-s1"},{"start":15,"end":19,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-c1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":17,"cssClass":"pl-en"},{"start":18,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-s1"}],[{"start":3,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":14,"cssClass":"pl-en"},{"start":15,"end":17,"cssClass":"pl-s1"},{"start":19,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":50,"cssClass":"pl-s"},{"start":52,"end":57,"cssClass":"pl-s1"},{"start":59,"end":61,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":43,"cssClass":"pl-s"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":47,"cssClass":"pl-s"},{"start":49,"end":55,"cssClass":"pl-en"},{"start":56,"end":58,"cssClass":"pl-s1"},{"start":60,"end":63,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":9,"cssClass":"pl-k"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":11,"cssClass":"pl-en"}],[{"start":1,"end":5,"cssClass":"pl-en"},{"start":6,"end":18,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":29,"cssClass":"pl-c"}],[{"start":0,"end":50,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":42,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":13,"cssClass":"pl-en"},{"start":14,"end":17,"cssClass":"pl-smi"},{"start":18,"end":28,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":11,"cssClass":"pl-s1"}],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":7,"end":9,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":9,"cssClass":"pl-en"},{"start":10,"end":12,"cssClass":"pl-s1"},{"start":14,"end":24,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":51,"cssClass":"pl-s"}],[{"start":4,"end":10,"cssClass":"pl-en"},{"start":11,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":52,"cssClass":"pl-s"}],[{"start":4,"end":10,"cssClass":"pl-en"},{"start":11,"end":13,"cssClass":"pl-s1"},{"start":15,"end":18,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":17,"cssClass":"pl-en"},{"start":18,"end":20,"cssClass":"pl-s1"},{"start":22,"end":30,"cssClass":"pl-s1"},{"start":31,"end":34,"cssClass":"pl-s1"}],[{"start":3,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":14,"cssClass":"pl-en"},{"start":15,"end":17,"cssClass":"pl-s1"},{"start":19,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":53,"cssClass":"pl-s"},{"start":55,"end":60,"cssClass":"pl-s1"},{"start":62,"end":64,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":44,"cssClass":"pl-s"}],[{"start":4,"end":10,"cssClass":"pl-en"},{"start":11,"end":13,"cssClass":"pl-s1"},{"start":15,"end":23,"cssClass":"pl-s1"},{"start":24,"end":27,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":9,"cssClass":"pl-k"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":11,"cssClass":"pl-en"}],[{"start":1,"end":5,"cssClass":"pl-en"},{"start":6,"end":18,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":31,"cssClass":"pl-c"}],[{"start":0,"end":50,"cssClass":"pl-c"}],[{"start":0,"end":60,"cssClass":"pl-c"}],[{"start":0,"end":30,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":19,"cssClass":"pl-smi"},{"start":20,"end":30,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":11,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":9,"cssClass":"pl-en"},{"start":10,"end":12,"cssClass":"pl-s1"},{"start":14,"end":24,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":15,"cssClass":"pl-en"},{"start":16,"end":18,"cssClass":"pl-s1"},{"start":20,"end":23,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":9,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":59,"cssClass":"pl-s"},{"start":61,"end":66,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":6,"cssClass":"pl-k"},{"start":7,"end":9,"cssClass":"pl-c1"}],[{"start":3,"end":10,"cssClass":"pl-en"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":19,"end":52,"cssClass":"pl-s"},{"start":54,"end":59,"cssClass":"pl-s1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":9,"cssClass":"pl-k"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":11,"cssClass":"pl-en"}],[{"start":1,"end":5,"cssClass":"pl-en"},{"start":6,"end":18,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/sadatmisr/monty/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/sadatmisr/monty/security/dependabot","repoSecurityAndAnalysisPath":"/sadatmisr/monty/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"errors.c","displayUrl":"https://github.com/sadatmisr/monty/blob/main/errors.c?raw=true","headerInfo":{"blobSize":"2.65 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"f63e987","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fsadatmisr%2Fmonty%2Fblob%2Fmain%2Ferrors.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"116","truncatedSloc":"110"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/sadatmisr/monty/discussions/new","newIssuePath":"/sadatmisr/monty/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/sadatmisr/monty/blob/main/errors.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/sadatmisr/monty/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"sadatmisr","repoName":"monty","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":true,"notAnalyzed":false,"symbols":[{"name":"err","kind":"function","identStart":642,"identEnd":645,"extentStart":642,"extentEnd":666,"fullyQualifiedName":"err","identUtf16":{"start":{"lineNumber":14,"utf16Col":5},"end":{"lineNumber":14,"utf16Col":8}},"extentUtf16":{"start":{"lineNumber":14,"utf16Col":5},"end":{"lineNumber":14,"utf16Col":29}}},{"name":"more_err","kind":"function","identStart":1529,"identEnd":1537,"extentStart":1529,"extentEnd":1558,"fullyQualifiedName":"more_err","identUtf16":{"start":{"lineNumber":56,"utf16Col":5},"end":{"lineNumber":56,"utf16Col":13}},"extentUtf16":{"start":{"lineNumber":56,"utf16Col":5},"end":{"lineNumber":56,"utf16Col":34}}},{"name":"string_err","kind":"function","identStart":2340,"identEnd":2350,"extentStart":2340,"extentEnd":2371,"fullyQualifiedName":"string_err","identUtf16":{"start":{"lineNumber":95,"utf16Col":5},"end":{"lineNumber":95,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":95,"utf16Col":5},"end":{"lineNumber":95,"utf16Col":36}}}]}},"copilotInfo":null,"csrf_tokens":{"/sadatmisr/monty/branches":{"post":"2fLwZ8VOXShK7C0SmNUNXKXPyPFlLsJBpbioE9-O9-gToDZDddnSj_TClt3UGiCOnaNHUxskDte4mp2CU8zm9g"},"/repos/preferences":{"post":"IJzLprs0Fz0Xvf5dNgTfhNyTPiSTm9lrKbL7dtrE1iyJNS_BRTcU2kb8jbWOQ11FkdDwTW2XuvVnq0i1n5zBrA"}}},"title":"monty/errors.c at main · sadatmisr/monty"}